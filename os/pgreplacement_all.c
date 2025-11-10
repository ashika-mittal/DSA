/* pager.c — Simple simulation of FIFO, OPTIMAL, and LRU page replacement.
   Input: number of frames, number of references, then the reference string.
   Then choose the algorithm from the small menu.
   Keeps it basic for lab/viva. */

#include <stdio.h>
#include <stdlib.h>

#define INF 1000000000

static void printFrames(int *frames, int F) {
    printf("  Frames: ");
    for (int i = 0; i < F; i++)
        if (frames[i] == -1) printf(" - ");
        else                 printf("%2d ", frames[i]);
    printf("\n");
}

static int inFrames(int *frames, int F, int page) {
    for (int i = 0; i < F; i++) if (frames[i] == page) return i;
    return -1;
}

/* ---------- FIFO ---------- */
static void fifo(int F, int N, int *ref) {
    int *frames = (int*)malloc(F*sizeof(int));
    for (int i=0;i<F;i++) frames[i] = -1;
    int next = 0, faults = 0;

    printf("\n== FIFO ==\n");
    for (int i = 0; i < N; i++) {
        int p = ref[i];
        printf("Ref %2d: %2d -> ", i+1, p);

        if (inFrames(frames, F, p) != -1) {
            printf("HIT\n");
        } else {
            faults++;
            frames[next] = p;                  // replace oldest
            next = (next + 1) % F;
            printf("FAULT\n");
        }
        printFrames(frames, F);
    }
    printf("Total page faults (FIFO): %d\n", faults);
    free(frames);
}

/* ---------- OPTIMAL ---------- */
static void optimal(int F, int N, int *ref) {
    int *frames = (int*)malloc(F*sizeof(int));
    for (int i=0;i<F;i++) frames[i] = -1;
    int faults = 0;

    printf("\n== OPTIMAL ==\n");
    for (int i = 0; i < N; i++) {
        int p = ref[i];
        printf("Ref %2d: %2d -> ", i+1, p);

        int pos = inFrames(frames, F, p);
        if (pos != -1) {                       // hit
            printf("HIT\n");
        } else {
            faults++;
            // free slot?
            int freePos = -1;
            for (int k=0;k<F;k++) if (frames[k]==-1){ freePos=k; break; }

            if (freePos != -1) {
                frames[freePos] = p;
            } else {
                // choose page used farthest in future (or never used)
                int best = -1, bestDist = -1;
                for (int k=0;k<F;k++) {
                    int dist = INF;
                    for (int j=i+1;j<N;j++) if (ref[j]==frames[k]) { dist=j; break; }
                    if (dist > bestDist) { bestDist = dist; best = k; }
                }
                frames[best] = p;
            }
            printf("FAULT\n");
        }
        printFrames(frames, F);
    }
    printf("Total page faults (OPTIMAL): %d\n", faults);
    free(frames);
}

/* ---------- LRU (stack / last-used time) ---------- */
static void lru(int F, int N, int *ref) {
    int *frames = (int*)malloc(F*sizeof(int));
    int *last   = (int*)malloc(F*sizeof(int));  // last used time
    for (int i=0;i<F;i++) { frames[i] = -1; last[i] = -1; }

    int time = 0, faults = 0;

    printf("\n== LRU ==\n");
    for (int i = 0; i < N; i++) {
        int p = ref[i];
        printf("Ref %2d: %2d -> ", i+1, p);
        time++;

        int pos = inFrames(frames, F, p);
        if (pos != -1) {
            last[pos] = time;                  // update last-used
            printf("HIT\n");
        } else {
            faults++;
            // free slot?
            int freePos = -1;
            for (int k=0;k<F;k++) if (frames[k]==-1){ freePos=k; break; }

            if (freePos != -1) {
                frames[freePos] = p;
                last[freePos]   = time;
            } else {
                // pick least recently used (smallest last time)
                int victim = 0;
                for (int k=1;k<F;k++) if (last[k] < last[victim]) victim = k;
                frames[victim] = p;
                last[victim]   = time;
            }
            printf("FAULT\n");
        }
        printFrames(frames, F);
    }
    printf("Total page faults (LRU): %d\n", faults);
    free(frames); free(last);
}

int main(void) {
    int F, N;
    printf("Number of frames: ");
    if (scanf("%d",&F)!=1 || F<=0) return 0;
    printf("Number of references: ");
    if (scanf("%d",&N)!=1 || N<=0) return 0;

    int *ref = (int*)malloc(N*sizeof(int));
    printf("Enter the reference string (%d integers):\n", N);
    for (int i=0;i<N;i++) scanf("%d",&ref[i]);

    while (1) {
        int ch;
        printf("\nMenu: 1) FIFO  2) OPTIMAL  3) LRU  4) Exit  -> ");
        if (scanf("%d",&ch)!=1) break;
        if (ch==1) fifo(F,N,ref);
        else if (ch==2) optimal(F,N,ref);
        else if (ch==3) lru(F,N,ref);
        else break;
    }
    free(ref);
    return 0;
}