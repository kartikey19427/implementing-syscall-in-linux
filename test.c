#include <linux/kernel.h>
#include <sys/syscall.h>
#include <stdio.h>
//Name: Kartikey Gupta
//Roll_Number: 2019427

#include <unistd.h>
#include <string.h>
#include <errno.h>


long identity_syscall(void)
{
    return syscall(440, 100000, "okay");
}

int main(int argc, char *argv[])
{
    long activity;
    activity = identity_syscall();


	if(activity<0){
    	 perror("");
    }

    else
    {
        printf("Success.\n");
    }

    return 0;
}

//cd /usr/src/linux-5.9.1/
 // int err=0;
	//  mm_segment_t oldfs;
	//  unsigned long long int *offset;
 //     struct file *fp=NULL;
 //     struct task_struct *task_list;
 //     unsigned int process_count = 0;
 //     int i;
 //     int ret;
 //     char *arrptr[100];
  
 //    oldfs=get_fs();
 //     set_fs(KERNEL_DS);
 
 //    fp=filp_open(filepath, O_WRONLY | O_CREAT, 0667);
  
  
 //     offset=0;
  
 
 //     pr_info("%s: In init\n", __func__);
 //     for_each_process(task_list) {
 //         if(x==task_list->pid){
 //         	arrptr[0]="Process name: ";
	//  	    arrptr[1]=task_list->comm;
	//  	    arrptr[2]="\n";
	//  	    arrptr[3]="Process ID: ";
	//  	    arrptr[4]=(char *)(task_list->pid);
	//  	    arrptr[5]="\n";
	//  	    arrptr[6]="Normal Priority: ";
	//  	    arrptr[7]=(char *)(task_list->normal_prio);
	//  	    arrptr[8]="\n";
 // 	    arrptr[9]="Static Priority: ";
	//  	    arrptr[10]=(char *)(task_list->static_prio);
	//  	    arrptr[11]="\n";
	//  	    arrptr[12]="Nice value: ";
	//  	    arrptr[13]=(char *)(task_nice(task_list));
	//  	    for(i=0;i<14;i++){
	//  	    	ret=vfs_write(fp,arrptr[i],strlen(arrptr[i]),0);
 // 	    }
 //            pr_info("Process: %s\t PID:[%d]\t Normal priority: %d\t", task_list->comm, task_list->pid, task_list->normal_prio);
 //         }
 //         process_count++;   
 //    }
 //     pr_info("Number of processes:%u\n", process_count);
 //    if(IS_ERR(fp)){
 //         err=PTR_ERR(fp);
 //         return -1;
 //     }
 //     filp_close(fp,NULL);
 //     set_fs(oldfs);

// pr_info("Process: %s\t PID:[%d]\t Normal priority: %d\t PID2:[%d]\t", task_list->comm, task_list->pid, task_list->normal_prio, task_list2->pid);
// pr_info("%s: In init\n", __func__);
//pr_info("Number of processes:%u\n", process_count);


// #include <linux/kernel.h>
// #include <linux/module.h>
// #include <linux/sched/signal.h>
// #include <linux/syscalls.h>
// #include <linux/sched.h>
// #include <linux/fs.h>
// #include <asm/segment.h>
// #include <asm/uaccess.h>
// #include <linux/buffer_head.h>


// SYSCALL_DEFINE2(sh_task_info, int, x, char *, filepath)

// {
//      mm_segment_t oldfs;
//      struct file *fp=NULL;
//      struct task_struct *task_list;
//      int ret;
//      char arr[1000];
//      int nice;
//      int c=0;


//     oldfs=get_fs();
//      set_fs(KERNEL_DS);
     

 
//     fp=filp_open(filepath, O_WRONLY | O_CREAT, 0667);
//     if(IS_ERR(fp)){
//         set_fs(oldfs);
//         return PTR_ERR(fp);
//     }
    
  

//      for_each_process(task_list) {
//          if(x==task_list->pid){
         
//             nice=task_nice(task_list);
//             sprintf(arr, "Process: %s\n Process ID:%d\n Normal priority: %d\n Static priority: %d\n Nice value %d\n", task_list->comm, task_list->pid, task_list->normal_prio, task_list->static_prio, nice);
//             ret=vfs_write(fp,arr,strlen(arr),0);
//             c++;
//          } 
//     }
//     if(c==0){
//         filp_close(fp,NULL);
//         set_fs(oldfs);
//         return -ESRCH;
//     }


//      filp_close(fp,NULL);
//      set_fs(oldfs);
        
//     return 0;
// }

//Desktop/linux-5.9.1
