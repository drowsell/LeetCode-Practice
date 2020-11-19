class Solution {
public:
    string defangIPaddr(string address) {
        
        int periodCount = 0;
        string output = "";
        
        for(int i = 0; i< address.length(); i++)
        {
            if(address[i] == '.')
                output += "[.]";
            else
                output += address[i];
        }
        
        return output;
    }
};
