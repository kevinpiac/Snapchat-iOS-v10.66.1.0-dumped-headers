//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCTextMediaCardView.h"

#import "SCActionMenuRenderableCellContentView-Protocol.h"
#import "SCSendPreviewMediaView-Protocol.h"

@class NSString, UITapGestureRecognizer, UIViewController, UIWindow;
@protocol SCChatCellPublisherGestureDelegate;

@interface SCAdShareMediaCardView : SCTextMediaCardView <SCActionMenuRenderableCellContentView, SCSendPreviewMediaView>
{
    UIViewController<SCChatCellPublisherGestureDelegate> *_parentVC;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIWindow *_mediaFullScreenWindow;
    UIWindow *_originalKeyWindow;
}

- (void).cxx_destruct;
- (id)SCAMediaTypes;
- (id)adShareMediaCardViewModel;
- (id)backgroundShapePath;
- (id)initWithParentViewController:(id)arg1;
- (void)onTap:(id)arg1;
- (void)rerenderForActionMenuWithBoundingSize:(struct CGSize)arg1;
- (void)resetWithOriginalSettings;
- (_Bool)shouldApplyThumbnailForLoadedViewModel:(id)arg1;
- (void)thumbnailImageWithCompletionHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

