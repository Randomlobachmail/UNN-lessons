        #include <string>
		#include <iostream>
		#include <map>
		

		
        using namespace std;
        int main(){
        	int n;
            int a[1001];
            int b[5];
            int temp=0, count =-1;
     		string size;
     		map<string, int> test1;
     		
     		test1["S"]=0;
     		test1["M"]=1;
     		test1["L"]=2;
     		test1["XL"]=3;
     		test1["XXL"]=4;
     		
     		for(int i=0;i<1001;++i){
     			a[i]=-1;
			 }

     
     		for(int i=0;i<5;++i){
     			cin >> b[i];
			}
            cin >> n;
            
            for(int i=0;i<n;++i){
            	cin >> size;
            	
            	temp=test1[size];
            	
            	if(b[temp]==0){
            		for(int j=temp;j<5;++j){
            			if(b[j]>0){
            				--b[j];
            				a[i]=j;
            				break;
						}
					}
					if(a[i]==-1){
						for(int j=temp;j>-1;--j){
							if(b[j]>0){
								--b[j];
								a[i]=j;
								break;
							}
						}
					}
					if(a[i]>temp&&a[i]-temp>1){
						for(int j=temp;j>-1;--j){
							if(b[j]>0){
								count=j;
								if(temp-count<a[i]-temp){
									++b[a[i]];
									--b[count];
									a[i]=count;
									}
								break;
							}
						}

					}
					
				}
				
            	
            	else{
					switch (test1[size]){
						case 0:
							--b[0];
							a[i]=0;
							break;
						case 1:
							--b[1];
							a[i]=1;
							break;
						case 2:
							--b[2];
							a[i]=2;
							break;
						case 3:
							--b[3];
							a[i]=3;
							break;
						case 4:
							--b[4];
							a[i]=4;
							break;
						default:
							break;
						}         		
				}
            }
            
            
            for(int i=0;i<n;++i){
            	
            	switch (a[i]){
						case 0:
							cout << "S" << endl;
							break;
						case 1:
							cout << "M" << endl;
							break;
						case 2:
							cout << "L" << endl;
							break;
						case 3:
							cout << "XL" << endl;
							break;
						case 4:
							cout << "XXL" << endl;
							break;
						default:
							break;
						}
    		}
    			
        	return 0;
        }
