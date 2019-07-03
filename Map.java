import java.util.ArrayList;
import java.util.*;
//Any one of the above can be used to import the required classes to make this program.//

public class Map<K,V>{
 
    ArrayList<MapNode<K,V>>buckets;
    int size;
    int numBuckets;
    final double DEFAULT_LOAD_FACTOR=0.75;
    
    public Map(){
    
        numBuckets=5;
        buckets=new ArrayList<>(numBuckets);
        for(int i=0;i<numBuckets;i++){
        buckets.add(null);
        
        }
    System.out.println("Hash Map Created");
    System.out.println("Number of pairs in map="+size);
    System.out.println("Size of map"+numBuckets);
    System.out.println("Default Load Factor"+DEFAULT_LOAD_FACTOR);
    
    }
    //K is converted into a small integer (called its hash code) using a hash function.
    //The hash code is used to find an index (hashCode % arrSize) and the entire linked list at that index(Separate chaining) is first searched for the presence of the K already.
    //If found, it’s value is updated and if not, the K-V pair is stored as a new node in the list.
    private int getBucketInd(K key){
    int hashCode=key.hashCode();// capital c,using the inbuilt function available in ArrayList Class
    return(hashCode%numBuckets);
    }
    public void insert(K key,V value){
    int bucketInd=getBucketInd(key);
    MapNode<K,V>head=buckets.get(bucketInd);
    while(head!=null){
    if((head.key).equals(key)){//head.key.equals(key)
    head.value=value;
    return;
    
    
    }
    head=head.next;
    
    
    }
    MapNode<K,V> newElementNode=new MapNode<K,V>(key,value);
    head=buckets.get(bucketInd);
    newElementNode.next=head;
    buckets.set(bucketInd,newElementNode);
    System.out.println("Pair("+key+","+value+") inserted successfully");
    size++;
    double loadfactor=(1.0*size)/numBuckets;
    System.out.println("Current Load Factor"+loadfactor);
    if(loadfactor>DEFAULT_LOAD_FACTOR){
    System.out.println(loadfactor+"which is the load factor is greater than Default load factor that is"+DEFAULT_LOAD_FACTOR+
    "Hence Rehashing will be done");
    rehash();
    System.out.println("New Size Of map"+numBuckets+"\n");
    
    
    
    }
    System.out.println("Number of Pairs in map="+size);
    System.out.println("Size of map"+numBuckets+"\n");
    
    }
    private void rehash(){
    
        System.out.println("Rehashing Started\n");
        ArrayList<MapNode<K,V>>temp=buckets;
        buckets=new ArrayList<MapNode<K,V>>(2*numBuckets);
        for(int i=0;i<2*numBuckets;i++){
        buckets.add(null);
        
        }
     size=0;
     numBuckets*=2;
     for(int i=0;i<temp.size();i++){
        MapNode<K,V>head=temp.get(i);
        while(head!=null){
        K key=head.key;
        V val=head.value;
        insert(key,val);
        head=head.next;
        
        }
        
        
        }
    System.out.println("\nRehashing ended\n");
    }
    public void printmap(){
    ArrayList<MapNode<K,V>>temp=buckets;
    System.out.println("Current Hash map");
    for(int i=0;i<temp.size();i++){
    MapNode<K,V>head=temp.get(i);
    while(head!=null){
    System.out.println("Key="+head.key+",val="+head.value);
    head=head.next;
    
    
    }
    
    
    }
    System.out.println();
    }
    
    }


