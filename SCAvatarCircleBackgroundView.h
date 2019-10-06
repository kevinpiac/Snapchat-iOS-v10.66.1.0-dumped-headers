//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCEventAnnouncing-Protocol.h"
#import "SCEventListener-Protocol.h"
#import "SCImageViewOptimizable-Protocol.h"

@class NSString, SCAvatarCircleBackgroundViewModel, SCEventListenerAnnouncer, SCLazy, UIBezierPath;
@protocol SCImageDownloading;

@interface SCAvatarCircleBackgroundView : UIView <SCEventAnnouncing, SCEventListener, SCImageViewOptimizable>
{
    SCLazy *_shapeView;
    SCLazy *_networkImage;
    SCEventListenerAnnouncer *_eventAnnouncer;
    struct CGRect _shapeLayerPathRect;
    UIBezierPath *_shapeLayerPath;
    unsigned long long _optimizationOptions;
    SCAvatarCircleBackgroundViewModel *_viewModel;
    id <SCImageDownloading> _imageDownloader;
    struct CGSize _preferredImageSize;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_setShapeLayerPathRect:(struct CGRect)arg1;
- (void)_showBackgroundNetworkImage;
- (void)_showShapeView;
- (void)addListener:(id)arg1;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
@property(retain, nonatomic) id <SCImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(nonatomic) unsigned long long optimizationOptions; // @synthesize optimizationOptions=_optimizationOptions;
@property(nonatomic) struct CGSize preferredImageSize; // @synthesize preferredImageSize=_preferredImageSize;
- (void)removeListener:(id)arg1;
@property(retain, nonatomic) SCAvatarCircleBackgroundViewModel *viewModel; // @synthesize viewModel=_viewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

