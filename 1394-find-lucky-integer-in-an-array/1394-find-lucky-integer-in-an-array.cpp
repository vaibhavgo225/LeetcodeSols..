class Solution {
public:
	int findLucky(vector<int>& arr) {
		int count;
		int frequency=-1;
		for(int i=0; i<arr.size(); i++) {
			count=0;
			bool done=false;
			for(int k=0; k<i; k++) {
				if(arr[i]==arr[k])
					done=true;
			}
			if(!done) {
				for(int j=0; j<arr.size(); j++) {
					if(arr[i]==arr[j]) {
						count++;
					}
				}

				if(count==arr[i]) {
					if(arr[i]>frequency) {
						frequency=arr[i];
					}
				}

			}
		}
		return frequency;

	}
};