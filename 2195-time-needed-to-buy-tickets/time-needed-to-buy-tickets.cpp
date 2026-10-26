class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        //declaring Queue -->
        queue<int>q;
        int n=tickets.size();
        //making queue containing index of ticket array->
        for(int i=0;i<n;i++){
            q.push(i);
        }
        int time=0;
        while(!q.empty()){
        int person=q.front();
        //issueing 1 ticket to the front peron-->
        tickets[person]--;
        //incrementing the cycle-->
        time++;

        //after issueing 1 ticket front person moves at end of queue-->so poping him out first and pushing at end of line
        q.pop();
        if(tickets[person]>0){
            q.push(person);
            //person goes back in queue if he has still tickets remaining to buy
        }
        //this process of counting time cycles continues till person k buys all his tickets.
        if(person==k &&tickets[person]==0){
            return time;
        }
    }
    return time;


    }
};