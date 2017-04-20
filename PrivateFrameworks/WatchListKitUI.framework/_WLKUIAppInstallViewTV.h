/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
 */

@interface _WLKUIAppInstallViewTV : UIView <SBIconProgressViewDelegate> {
    TVImageProxy * _appIconImageProxy;
    _TVImageView * _appIconImageView;
    id /* block */  _completion;
    double  _installProgress;
    UIImage * _placeholderAppIcon;
    SBIconProgressView * _progressView;
    NSString * _subtitle;
    UILabel * _subtitleLabel;
    NSString * _title;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) TVImageProxy *appIconImageProxy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) double installProgress;
@property (nonatomic, retain) UIImage *placeholderAppIcon;
@property (nonatomic, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

+ (id)_progressMaskImage;

- (void).cxx_destruct;
- (id)appIconImageProxy;
- (void)dealloc;
- (void)finishInstallationWithCompletion:(id /* block */)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (double)installProgress;
- (void)layoutSubviews;
- (id)placeholderAppIcon;
- (void)progressViewCanBeRemoved:(id)arg1;
- (void)setAppIconImageProxy:(id)arg1;
- (void)setInstallProgress:(double)arg1;
- (void)setPlaceholderAppIcon:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end