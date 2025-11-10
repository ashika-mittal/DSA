// #include <stdio.h>
// #include <stdlib.h>
// #include <limits.h>

// typedef struct {
//     int id, at, bt, pr;
//     int rt, wt, tat, done;
// } Process;

// void reset(Process p[], int n) {
//     for (int i = 0; i < n; i++) {
//         p[i].rt = p[i].bt;
//         p[i].wt = p[i].tat = 0;
//         p[i].done = 0;
//     }
// }

// void printResults(Process p[], int n, char *name) {
//     float avgWT = 0, avgTAT = 0;
//     printf("\n%s Scheduling:\n", name);
//     printf("PID\tAT\tBT\tWT\tTAT\n");
//     for (int i = 0; i < n; i++) {
//         printf("%d\t%d\t%d\t%d\t%d\n", p[i].id, p[i].at, p[i].bt, p[i].wt, p[i].tat);
//         avgWT += p[i].wt; avgTAT += p[i].tat;
//     }
//     printf("Avg WT = %.2f, Avg TAT = %.2f\n", avgWT/n, avgTAT/n);
// }

// void SRTF(Process p[], int n) {
//     reset(p, n);
//     int time = 0, done = 0;
//     while (done < n) {
//         int idx = -1, min = INT_MAX;
//         for (int i = 0; i < n; i++)
//             if (p[i].at <= time && p[i].rt > 0 && p[i].rt < min)
//                 min = p[i].rt, idx = i;

//         if (idx != -1) {
//             p[idx].rt--; 
//             if (p[idx].rt == 0) {
//                 done++;
//                 int ft = time + 1;
//                 p[idx].tat = ft - p[idx].at;
//                 p[idx].wt = p[idx].tat - p[idx].bt;
//             }
//         }
//         time++;
//     }
//     printResults(p, n, "Preemptive SJF (SRTF)");
// }

// void RR(Process p[], int n, int q) {
//     reset(p, n);
//     int time = 0, done = 0;
//     while (done < n) {
//         int idle = 1;
//         for (int i = 0; i < n; i++) {
//             if (p[i].at <= time && p[i].rt > 0) {
//                 idle = 0;
//                 int use = (p[i].rt > q) ? q : p[i].rt;
//                 p[i].rt -= use;
//                 time += use;
//                 if (p[i].rt == 0) {
//                     done++;
//                     p[i].tat = time - p[i].at;
//                     p[i].wt = p[i].tat - p[i].bt;
//                 }
//             }
//         }
//         if (idle) time++;
//     }
//     printResults(p, n, "Round Robin");
// }

// void PriorityNP(Process p[], int n) {
//     reset(p, n);
//     int time = 0, done = 0;
//     while (done < n) {
//         int idx = -1, best = INT_MAX;
//         for (int i = 0; i < n; i++)
//             if (!p[i].done && p[i].at <= time && p[i].pr < best)
//                 best = p[i].pr, idx = i;

//         if (idx != -1) {
//             time += p[idx].bt;
//             p[idx].tat = time - p[idx].at;
//             p[idx].wt = p[idx].tat - p[idx].bt;
//             p[idx].done = 1;
//             done++;
//         } else time++;
//     }
//     printResults(p, n, "Non-preemptive Priority");
// }

// int main() {
//     int n, choice, q;
//     printf("Enter number of processes: ");
//     scanf("%d", &n);
//     Process p[n];
//     for (int i = 0; i < n; i++) {
//         p[i].id = i+1;
//         printf("\nP%d Arrival, Burst, Priority: ", i+1);
//         scanf("%d %d %d", &p[i].at, &p[i].bt, &p[i].pr);
//     }

//     while (1) {
//         printf("\n1.SRTF  2.Round Robin  3.Priority NP  4.Exit\nChoice: ");
//         scanf("%d", &choice);
//         if (choice == 1) SRTF(p,n);
//         else if (choice == 2) { printf("Quantum: "); scanf("%d",&q); RR(p,n,q); }
//         else if (choice == 3) PriorityNP(p,n);
//         else break;
//     }
// }


#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

typedef struct{
int pid, at, bt,ct;
int rt,wt,tat,done;
}Process;

void reset(Process p[], int n){
	for(int i=0;i<n;i++){
		p[i].rt =p[i].bt;
		p[i].wt=p[i].tat=0;
		p[i].ct=0;
		p[i].done=0;
		}
		
	}

void printresult(Process p[], int n, char* name){
	printf("Shortest Remaining Time First(SRTF)\n");
	printf("PID\tAT\tBT\tCT\tTAT\tWT\n");
	float avgWT=0;
	float avgTAT=0;
	for(int i=0;i<n;i++){
		printf("P%d\t%d\t%d\t%d\t%d\t%d\n" , p[i].pid, p[i].at, p[i].bt,p[i].ct,p[i].tat, p[i].wt);
		avgWT+=p[i].wt;
		avgTAT+=p[i].tat;
	}
	avgWT=avgWT/n;
	avgTAT=avgTAT/n;
	printf("average turnaround time = %f" ,avgTAT);
	printf("average waiting time = %f" ,avgWT);
}

void SRTF(Process p[], int n){
	int min = INT_MAX;
	int done=0;
	int time=0;
	int index=-1;
	reset(p,n);
    while(done<n){
	for(int i=0;i<n;i++){
		if(p[i].at<=time && p[i].rt<min && p[i].rt>0){
			index=i;
			min=p[i].rt;
        }
			
		if(index!=-1){
		p[index].rt--;
		
		if(p[index].rt==0) {
		done=1;
		}
		p[index].ct=time;
		p[index].tat=p[index].ct-p[index].at;
		p[index].wt= p[index].tat-p[index].bt;
		}
}time++;
    }
printresult(p,n,"SRTF");	
}

int main(){
int n;
printf("number of processes: ");
scanf("%d" ,&n);

Process p[n];

for(int i=0;i<n;i++){
	printf("process id: ");
	scanf("%d" , &p[i].pid);
	
	printf("arrival time: ");
	scanf("%d" , &p[i].at);
	
	printf("burst time: ");
	scanf("%d" , &p[i].bt);
	}
	

	
SRTF(p,n);


	
}