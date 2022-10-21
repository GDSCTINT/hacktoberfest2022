/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public boolean isPalindrome(ListNode head) {
        if(head==null || head.next==null) return true;
        
        //getmid
       ListNode mid = getmid(head);
        
        
        // reverse
       ListNode reversedlist=  reverse(mid);
        
        // now checking 
        ListNode temp = reversedlist;
        
        while(head!=null && temp !=null ){
            if(temp.val!=head.val) break;
            temp=temp.next;
            head = head.next;
        }
        reverse(reversedlist);
    
        if(head==null || temp == null) return true;
        return false;
        
    }
    public ListNode getmid(ListNode head){
        ListNode s = head;
        ListNode f = head;
        while(f!=null && f.next!=null){
            s=s.next;
            f=f.next.next; 
            
        }
        return s;
    }
    
    public ListNode reverse(ListNode head){
        if(head==null) return head ;
        ListNode prev = null;
        ListNode current = head;
        ListNode future = current.next;
         while(current != null){
             current.next=prev;
             prev=current;
             current=future;
             if(future != null)future=future.next;
             
         }
        return prev;
        
    }
}