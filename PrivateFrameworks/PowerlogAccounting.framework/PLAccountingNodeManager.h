/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
 */

@interface PLAccountingNodeManager : NSObject {
    NSMutableDictionary * _nodeIDToNodeName;
    NSMutableDictionary * _nodeNameToNodeID;
}

@property (retain) NSMutableDictionary *nodeIDToNodeName;
@property (retain) NSMutableDictionary *nodeNameToNodeID;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)childNodeIDsFromChildNodeNames:(id)arg1;
- (id)init;
- (id)nodeIDForNodeName:(id)arg1 isPermanent:(BOOL)arg2;
- (id)nodeIDToNodeName;
- (id)nodeNameForNodeID:(id)arg1;
- (id)nodeNameToNodeID;
- (void)setNodeIDToNodeName:(id)arg1;
- (void)setNodeNameToNodeID:(id)arg1;
- (void)setupNodes;

@end