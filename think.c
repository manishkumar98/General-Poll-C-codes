#include<stdio.h>
#include<stdlib.h>
#include<string.h>
	void main()
		{
			char str1[1000000];
			char str2[1000000];
			fgets(str1,1000000,stdin);
			fgets(str2,1000000,stdin);
			int c1[256]={0};
			int c2[256]={0};
			int len1=0;
			int len2=0;
			int count=0;
			int start=0;
			int minwin=0;
			int sin=0;
			int i=0;
			int flag=0;
			for(len2=0;str2[len2]!='\0';len2++);
			for(len1=0;str1[len1]!='\0';len1++);
			len1=len1-1;
			len2=len2-1;


			if(len1<len2)
				printf("No such window exist");
			else
			{
			 	for(i=0;i<len2;i++){
					c2[str2[i]]++;
			 	}

				for(i=0;i<len1;i++){
					c1[str1[i]]++;
					if((c2[str1[i]]!=0)&&(c2[str1[i]]>=c1[str1[i]]))
					count++;
					if(count==len2){
						flag=1;//all characters in the second string are present in the first string
						while((c1[str1[start]]>c2[str1[start]])||(c2[str1[start]]==0))
						{
							if((c1[str1[start]]>c2[str1[start]])){
							c1[str1[start]]--;
						 	}
							start++;

						}


					
						if(minwin>i-start+1){
							minwin=i-start+1;
							sin=start;
						}//if

					}//if
			    }//for
				if(flag==0)
					printf("No such window exist");
			else{
			printf("%d %d\n",sin,(sin+minwin-1));
			for(int k=sin;k<sin+minwin;k++){
				printf("%c",str1[k]);
			}
			}
	    }
	}