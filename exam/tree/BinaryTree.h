#pragma once
template <class elemType> 	                    // ��������Ԫ������ΪelemType
class binaryTree {			                    // �������ĳ�����������
public:
    virtual void clear() = 0;		            // ���
    virtual bool empty() const = 0;             // �п�
    virtual int height() const = 0;	            // �������ĸ߶�
    virtual int size() const = 0;	            // �������Ľ������
    virtual void preOrderTraverse() const = 0;  // ǰ�����
    virtual void inOrderTraverse() const = 0;	// �������
    virtual void postOrderTraverse() const = 0;	// �������
    virtual void levelOrderTraverse() const = 0;// ��α���
    virtual ~binaryTree() {};
};