#include<bits/stdc++.h>

using namespace std;

#define MOD 10006


struct trie_node
{
	char c;
	struct trie_node *child[26];
	int loose;
	int win;	
};

typedef struct trie_node tnode;

tnode *make_node()
{
	tnode *X = (tnode *)malloc(sizeof(tnode));
	X->win = -1;
	X->loose = -1;
	for(int i=0 ; i< 26 ; i++)
		X->child[i] = NULL;
	return X;
}


tnode * insert_TRIE(tnode *root, string s)
{
	tnode *root1 = root;
	for(int i=0; i< s.length() ; i++)
	{
		int val = s[i] - 'a';
		if(root->child[val] == NULL)
		{
			root->child[val] = make_node();
			root = root->child[val];
		}
		else
		{
			root = root->child[val];
		}
	}	
	return root1;
}

void dfs_TRIE_win(tnode *root)
{
	if(root->win != -1)
		return;
	int t = 0;
	for(int i=0 ; i< 26 ; i++)
	{
		if( root->child[i] != NULL)
			t=1;
	}
	if(t==0)
	{
		root->win = 0;
		//cout<<"here "<<endl;
		return;	
	}
	for(int i=0 ; i< 26 ; i++)
	{
		if( root->child[i] != NULL)
		{
			dfs_TRIE_win(root->child[i]);
		}
	}
	for(int i=0 ; i< 26 ; i++)
	{
		if(root->child[i] != NULL)
		{
			if(root->child[i]->win == 0)
			{
				root->win = 1;
				return;
			}
		}
	}
	root->win = 0;
	return;	
}

void dfs_TRIE_loose(tnode *root)
{
	if(root->loose != -1)
		return;
	int t = 0;
	for(int i=0 ; i< 26 ; i++)
	{
		if( root->child[i] != NULL)
			t=1;
	}
	if(t==0)
	{
		root->loose = 1;
		//cout<<"here "<<endl;
		return;	
	}
	for(int i=0 ; i< 26 ; i++)
	{
		if( root->child[i] != NULL)
		{
			dfs_TRIE_loose(root->child[i]);
		}
	}
	for(int i=0 ; i< 26 ; i++)
	{
		if(root->child[i] != NULL)
		{
			if(root->child[i]->loose == 0)
			{
				root->loose = 1;
				return;
			}
		}
	}
	root->loose = 0;
	return;	
}


int main()
{
	int n,k;
	cin>>n>>k;
	string str;
	tnode *root = (tnode *)malloc(sizeof(tnode));
	root->win = -1;
	root->loose = -1;
	for(int i=0 ; i< n ; i++)
	{
		cin>>str;
		root = insert_TRIE(root,str);
	}
	dfs_TRIE_win(root);
	dfs_TRIE_loose(root);
	int Win_val = root->win;
	int Los_val = root->loose;
	cout<<Win_val<<" "<<Los_val<<endl;
	if( Win_val == 0)
	{
		cout<<"Second"<<endl;
		return 0;
	}
	if(Los_val == 0)
	{
		if(k%2 == 0)
			cout<<"Second"<<endl;
		else
			cout<<"First"<<endl;
		return 0;	
	}
	if(Win_val != 0 && Los_val != 0)
	{
		cout<<"First"<<endl;
	}
	return 0;
}