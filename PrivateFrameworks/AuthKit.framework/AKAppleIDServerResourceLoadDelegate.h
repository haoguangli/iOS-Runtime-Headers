/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface AKAppleIDServerResourceLoadDelegate : NSObject <NSSecureCoding> {
    NSString * _altDSID;
    NSString * _continuationToken;
    NSString * _identityToken;
    BOOL  _isEligibleToDisableStingray;
    NSString * _passwordResetToken;
    AKDevice * _proxiedDevice;
    AKAnisetteData * _proxiedDeviceAnisetteData;
    NSString * _serviceToken;
    int  _serviceType;
    BOOL  _shouldSendAbsintheHeader;
    BOOL  _shouldSendEphemeralAuthHeader;
    BOOL  _shouldSendICSCIntentHeader;
    BOOL  _shouldSendLocalUserHasAppleIDLoginHeader;
}

@property (nonatomic, copy) NSString *altDSID;
@property (nonatomic, copy) NSString *continuationToken;
@property (nonatomic) BOOL isEligibleToDisableStingray;
@property (nonatomic, copy) NSString *passwordResetToken;
@property (nonatomic, retain) AKDevice *proxiedDevice;
@property (nonatomic, retain) AKAnisetteData *proxiedDeviceAnisetteData;
@property (nonatomic, copy) NSString *serviceToken;
@property (nonatomic) int serviceType;
@property (nonatomic) BOOL shouldSendAbsintheHeader;
@property (nonatomic) BOOL shouldSendEphemeralAuthHeader;
@property (nonatomic) BOOL shouldSendICSCIntentHeader;
@property (nonatomic) BOOL shouldSendLocalUserHasAppleIDLoginHeader;

+ (id)sharedController;
+ (unsigned int)signalFromServerResponse:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)altDSID;
- (id)continuationToken;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAltDSID:(id)arg1 identityToken:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEligibleToDisableStingray;
- (BOOL)isResponseActionable:(id)arg1;
- (BOOL)isResponseFinal:(id)arg1;
- (BOOL)isResponseFinalForHSA2ServerFlow:(id)arg1;
- (id)passwordResetToken;
- (id)proxiedDevice;
- (id)proxiedDeviceAnisetteData;
- (id)serviceToken;
- (int)serviceType;
- (void)setAltDSID:(id)arg1;
- (void)setContinuationToken:(id)arg1;
- (void)setIsEligibleToDisableStingray:(BOOL)arg1;
- (void)setPasswordResetToken:(id)arg1;
- (void)setProxiedDevice:(id)arg1;
- (void)setProxiedDeviceAnisetteData:(id)arg1;
- (void)setServiceToken:(id)arg1;
- (void)setServiceType:(int)arg1;
- (void)setShouldSendAbsintheHeader:(BOOL)arg1;
- (void)setShouldSendEphemeralAuthHeader:(BOOL)arg1;
- (void)setShouldSendICSCIntentHeader:(BOOL)arg1;
- (void)setShouldSendLocalUserHasAppleIDLoginHeader:(BOOL)arg1;
- (BOOL)shouldSendAbsintheHeader;
- (BOOL)shouldSendEphemeralAuthHeader;
- (BOOL)shouldSendICSCIntentHeader;
- (BOOL)shouldSendLocalUserHasAppleIDLoginHeader;
- (void)signRequest:(id)arg1;

@end