//143. Reorder List


#include <bits/stdc++.h>
using namespace std; 
#define fo(a,b) for(int a=0;a<b;a++)
#define loop(a, b, c) for(int a=b; a<c; a++)
#define all(x) (x).begin(), (x).end()
#define vi vector<int>
#define vvi vector<vi>
#define bs binary_search
#define pii pair<int, int>
#define mem(a, b) memset(a, b, sizeof(a))
#define printv(v) for(int i=0;i<v.size();i++)cout << v[i] << " " ;cout <<endl;
#define inp(v) for(int i=0;i<v.size();i++)cin >> v[i];
#define lb cout << endl;
#define pb(i) push_back(i);
#define C continue;
#define B break;
#define t true;
#define f false;
#define Y cout << "YES" << endl;
#define no cout << "NO" << endl;
#define printvv(v) fo(i,v.size()){{fo(j,v[0].size())cout<<v[i][j]<<" ";}lb}
#define printbool(flag) if(flag){Y;}else{no;}
const int mod=1e9+7;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0),next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x,ListNode *next) : val(x),next(next) {}
};


class Solution {
public:
    ListNode* reverse(ListNode*& head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;

        return head;
    }
    void reorderList(ListNode* head) {
        ListNode* fh = head,sh = head;
        int len = 0;
        while(fh)fh = fh->next,len++;

        int itr = 0;
        ListNode* middle = nullptr,prev_middle = nullptr;
        while(itr <= len/2){
            itr++;
            prev_middle = middle;
            middle = middle->next;
        }

        if(len%2 == 0){
            middle = prev_middle;   
        }



        


        
    }
};

int main(){
    Solution sol;
}