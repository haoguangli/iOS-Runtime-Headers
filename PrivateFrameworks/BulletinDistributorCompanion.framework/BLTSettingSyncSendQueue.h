/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTSettingSyncSendQueue : NSObject {
    NSDictionary * _iconWhitelist;
    id /* block */  _sectionIconSender;
    NSObject<OS_dispatch_queue> * _sectionInfoProcessingQueue;
    NSObject<OS_dispatch_semaphore> * _sectionInfoSemaphore;
    id /* block */  _sectionInfoSender;
    NSObject<OS_dispatch_queue> * _sectionInfoSenderQueue;
    id /* block */  _sectionParametersProvider;
    id /* block */  _sectionRemoveSender;
    NSObject<OS_dispatch_queue> * _subsectionParameterIconProcessingQueue;
    NSObject<OS_dispatch_semaphore> * _subsectionParameterIconSemaphore;
    NSObject<OS_dispatch_queue> * _subsectionParameterIconSenderQueue;
}

@property (nonatomic, retain) NSDictionary *iconWhitelist;
@property (nonatomic, copy) id /* block */ sectionIconSender;
@property (nonatomic, copy) id /* block */ sectionInfoSender;
@property (nonatomic, copy) id /* block */ sectionParametersProvider;
@property (nonatomic, copy) id /* block */ sectionRemoveSender;

- (void).cxx_destruct;
- (void)_sendEffectiveSectionInfo:(id)arg1 waitForAcknowledgement:(BOOL)arg2 withQueue:(id)arg3 spoolToFile:(BOOL)arg4 andCompletion:(id /* block */)arg5;
- (void)_sendSectionIcon:(id)arg1 forSectionID:(id)arg2 forSubtypeID:(int)arg3 waitForAcknowledgement:(BOOL)arg4 withQueue:(id)arg5 spoolToFile:(BOOL)arg6 andCompletion:(id /* block */)arg7;
- (void)_sendSectionInfoWithSectionID:(unsigned int)arg1 usingProvider:(id /* block */)arg2 updateProgress:(id /* block */)arg3 sendCompleted:(id /* block */)arg4 sendAttempt:(unsigned int)arg5 waitForAcknowledgement:(BOOL)arg6 group:(id)arg7 spoolToFile:(BOOL)arg8;
- (id)iconWhitelist;
- (id)init;
- (id)initWithMaxConcurrentSendCount:(unsigned int)arg1;
- (id /* block */)sectionIconSender;
- (id /* block */)sectionInfoSender;
- (id /* block */)sectionParametersProvider;
- (id /* block */)sectionRemoveSender;
- (void)sendEffectiveSectionInfosUsingProvider:(id /* block */)arg1 count:(unsigned int)arg2 sectionInfoSendCompleted:(id /* block */)arg3 completion:(id /* block */)arg4 progress:(id /* block */)arg5 spoolToFile:(BOOL)arg6;
- (void)sendRemoveSectionWithSectionID:(id)arg1;
- (void)sendSectionSubtypeParameterIcons:(id)arg1 sectionID:(id)arg2 waitForAcknowledgement:(BOOL)arg3 spoolToFile:(BOOL)arg4 completion:(id /* block */)arg5;
- (void)sendSpooledRequestsNowWithSender:(id /* block */)arg1 completion:(id /* block */)arg2 progress:(id /* block */)arg3;
- (void)setIconWhitelist:(id)arg1;
- (void)setSectionIconSender:(id /* block */)arg1;
- (void)setSectionInfoSender:(id /* block */)arg1;
- (void)setSectionParametersProvider:(id /* block */)arg1;
- (void)setSectionRemoveSender:(id /* block */)arg1;

@end