/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _PFChangeInfo : NSObject {
    unsigned int  _changeType;
    NSIndexPath * _finalIndexPath;
    NSManagedObject * _object;
    _NSDefaultSectionInfo * _sectionInfo;
    NSIndexPath * _startIndexPath;
}

@property (nonatomic) unsigned int changeType;
@property (nonatomic, retain) NSIndexPath *finalIndexPath;
@property (nonatomic, readonly, retain) NSManagedObject *object;
@property (nonatomic, retain) _NSDefaultSectionInfo *sectionInfo;
@property (nonatomic, retain) NSIndexPath *startIndexPath;

- (unsigned int)changeType;
- (void)dealloc;
- (id)description;
- (id)finalIndexPath;
- (unsigned int)hash;
- (id)initWithObject:(id)arg1;
- (id)initWithObject:(id)arg1 changeType:(unsigned int)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)object;
- (id)sectionInfo;
- (void)setChangeType:(unsigned int)arg1;
- (void)setFinalIndexPath:(id)arg1;
- (void)setSectionInfo:(id)arg1;
- (void)setStartIndexPath:(id)arg1;
- (id)startIndexPath;

@end