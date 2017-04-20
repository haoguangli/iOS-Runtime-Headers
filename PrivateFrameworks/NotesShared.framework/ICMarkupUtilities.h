/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICMarkupUtilities : NSObject

+ (void)applyMarkupModelData:(id)arg1 attachment:(id)arg2 completionBlock:(id /* block */)arg3;
+ (void)applyReturnedMarkupURL:(id)arg1 attachment:(id)arg2 completionBlock:(id /* block */)arg3;
+ (id)cleanImageMetadataFromData:(id)arg1;
+ (id)createMarkupViewController;
+ (id)createProcessingMarkupViewControllerOutWindow:(struct UIWindow {}**)arg1;
+ (id)dataToEditForAttachment:(id)arg1;
+ (id)dataToEditForAttachment:(id)arg1 embedData:(BOOL)arg2;
+ (void)embedReturnedMarkupURL:(id)arg1 attachment:(id)arg2 completionBlock:(id /* block */)arg3;
+ (void)extractReturnedMarkupURL:(id)arg1 attachment:(id)arg2 completionBlock:(id /* block */)arg3;
+ (struct UIImage { Class x1; }*)fullSizeImageWithMarkupAndFilterForAttachment:(id)arg1;
+ (BOOL)hasPrivateImageMetadata:(id)arg1;
+ (id)imageDataWithMarkupModelData:(id)arg1 sourceImageData:(id)arg2;
+ (id)imageDataWithMarkupModelData:(id)arg1 sourceImageData:(id)arg2 embedData:(BOOL)arg3;
+ (id)imageDataWithMarkupModelData:(id)arg1 sourceImageURL:(id)arg2;
+ (struct UIImage { Class x1; }*)imageWithMarkupModelData:(id)arg1 sourceImage:(struct UIImage { Class x1; }*)arg2;
+ (id)markupModelDataFromDataAtURL:(id)arg1;

@end