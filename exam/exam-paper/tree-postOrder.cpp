/*********Begin**********  ��  **********End**********����ɾ��
��*********Begin*********  ��  ********End********֮������
Ҫ��ʹ��ָ���������������������������������ȣ���д©д���÷�

��֪���������ö��������洢��ʾ��
��ʵ�ֵݹ����������������㷨void postOrder( Node *t ) const;��
��ʾ�����˼��Ϊ����������Ϊ�գ����㷨����������ִ�У�
?	�������������
?	�������������
?	���ʸ����

�������Ķ��������ı�ʾ����:
template <class elemType> 
class BinaryLinkList{
private:
    struct Node {  									// �����������
        Node  *left , *right ;							// ָ�����Һ��ӵ�ָ��
        elemType data;								// ����������
        Node() : left(NULL), right(NULL) { }					// �޲ι��캯��
        Node(elemType value, Node *l = NULL, Node * r =NULL ){
            data=value; left=l; right=r; 
        }
        ~Node() {} 
    };
    Node * root;									// ˽�У�ָ��������ĸ����
    int size( Node *t ) const; 							// ˽�У��������Ľ������
    int height( Node *t ) const; 							// ˽�У��������ĸ߶�
    int leafNum(Node *t )const; 							// ˽�У���������Ҷ����
    void preOrder( Node *t ) const;							// ˽�У��ݹ�ǰ�����
    void inOrder( Node *t ) const;							// ˽�У��ݹ��������
    void postOrder( Node *t ) const;						// ˽�У��ݹ�������
����
public: 
    BinaryLinkList() : root( NULL) {}						// ����ն�����
    ~BinaryLinkList(){ clear(); }				
    bool empty () const{ return root == NULL; }					// ���У��п�
    void clear() {if (root) clear(root); root = NULL;}				// ���У����
    int size() const { return size(root);}						// ���У���������
    int height() const { return height(root); }					// ���У��������ĸ߶�
    int leafNum()const{ return leafNum(root); }					// ���У���������Ҷ����
    void preOrderTraverse() const{ if(root) preOrder(root); }			// ���У�ǰ����� 
    void inOrderTraverse() const { if(root) inOrder(root); }			// ���У��������
    void postOrderTraverse() const{ if(root) postOrder(root);}			// ���У��������
����
    } 
};
*/
/***************begin***************/

template <class elemType>
void BinaryLinkList<elemType>::postOrder(Node* t) const {
    if (t) {
        postOrder(t->left); 		// �������������
        postOrder(t->right); 		// �������������
        cout << t->data << ' '; 	// ���ʵ�ǰ���
    }
}

/****************end****************/