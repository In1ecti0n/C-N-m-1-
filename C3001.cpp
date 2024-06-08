#include<bits/stdc++.h>
using namespace std;

struct Node { //khởi tạo linked list với dữ liệu và con trỏ;
	int val;
	Node* next;
	Node(int value){   //hàm khởi tạo một node mới
		val = value;
		next = NULL;
	}
};

void push_front(Node** head, int new_val){
	Node* new_node = new Node(new_val);  //con trỏ Node trỏ tới new_node, con trỏ được cấp bộ nhớ kiểu struct Node được định nghĩa ở trên 
	new_node->next = *head;  // con trỏ next (định nghĩa hàm struct) trỏ tới vị trí đầu tiên mà con trỏ head chỉ
	*head = new_node; //con trỏ head sẽ chỉ tới newnode;
}

void printList(Node* head){
	Node* i = head;
	while(i){
		cout<<i->val<<" ";
		i = i->next;
	}
	cout<<"\n";
}

// function to add 2 numbers given as linked lists
Node* add(Node* l1, Node* l2){
	Node* ans = new Node(0);
	Node* curr = ans;
	int carry = 0;
	while(l1 || l2){
		int sum = 0;
		if(l1) sum += l1->val;
		if(l2) sum += l2->val;
		sum += carry;

		curr->next = new Node(sum%10);
		curr = curr->next;

		carry = sum/10;

		if(l1) l1 = l1->next;
		if(l2) l2 = l2->next;
	}

	if(carry){
		curr->next = new Node(carry);
	}
	ans = ans->next;
	return ans;
}

int main(){
    int t; cin>>t;
    string s; 
	string s1;
	string s2;
    while(t--){
        cin>>s;
        size_t pos = s.find("+");
		if (pos != string::npos){
			string s1 = s.substr(1, pos);
			string s2 = s.substr(pos + 1);
		}
		Node* l1 = NULL;
		for (int i = 0; i < s1.size(); i++){
			push_front(&l1, s1[i]);
		}
		Node* l2 = NULL;
		for (int i = 0; i < s2.size(); i++){
			push_front(&l2, s2[i]);
		}
		Node* sum = add(l1,l2);
		printList(sum);
	}
}
	
