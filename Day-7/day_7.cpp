unordered_map <char,int> freq_map;
	    for(char c:s){
	        freq_map[c]++;
	    }
	    unordered_map <int,int> freq_count;
	    for(const auto &pair : freq_map){
	        freq_count[pair.second]++;
	    }
	    if(freq_count.size()==1){
	        return true;
	    }
	    else if(freq_count.size()==2){
	        auto it= freq_count.begin();
	        int freq1= it-> first;
	        int count1= it-> second;
	        ++it;
	        int freq2= it-> first;
	        int count2= it-> second;
	        if((count1 ==1 && (freq1 == 1|| freq1 - freq2==1))||(count2 ==1 && (freq2 == 1|| freq2 - freq1==1))){
	            return true;
	        }
	        
	    }
	        return false;