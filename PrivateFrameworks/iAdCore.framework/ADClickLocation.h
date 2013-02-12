/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@interface ADClickLocation : PBCodable {
    int _h;
    BOOL _hasH;
    BOOL _hasW;
    BOOL _hasX;
    BOOL _hasY;
    int _w;
    int _x;
    int _y;
}

@property int h;
@property(readonly) BOOL hasH;
@property(readonly) BOOL hasW;
@property(readonly) BOOL hasX;
@property(readonly) BOOL hasY;
@property int w;
@property int x;
@property int y;

- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int)h;
- (BOOL)hasH;
- (BOOL)hasW;
- (BOOL)hasX;
- (BOOL)hasY;
- (id)init;
- (BOOL)readFrom:(id)arg1;
- (void)setH:(int)arg1;
- (void)setW:(int)arg1;
- (void)setX:(int)arg1;
- (void)setY:(int)arg1;
- (int)w;
- (void)writeTo:(id)arg1;
- (int)x;
- (int)y;

@end