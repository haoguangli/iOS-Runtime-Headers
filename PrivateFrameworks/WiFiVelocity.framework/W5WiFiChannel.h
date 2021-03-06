/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
 */

@interface W5WiFiChannel : NSObject <NSCopying, NSSecureCoding> {
    int  _channel;
    int  _flags;
}

@property (nonatomic, readonly) int channel;
@property (nonatomic, readonly) int flags;

+ (BOOL)supportsSecureCoding;

- (int)channel;
- (BOOL)conformsToProtocol:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (int)flags;
- (unsigned int)hash;
- (id)init;
- (id)initWithChannel:(int)arg1 flags:(int)arg2;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToChannel:(id)arg1;

@end
