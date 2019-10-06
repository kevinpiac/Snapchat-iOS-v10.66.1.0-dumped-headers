//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCOperaPageableViewController-Protocol.h"

@class NSMapTable, NSObject, NSString, SCOperaConfiguration, SCOperaEventListenerAnnouncer, SCOperaSharedResourceManager;
@protocol SCOperaLayer, SCOperaPageableViewControllerDelegate, SCOperaPropertyUpdateModerator;

@interface SCOperaLayerViewController : UIViewController <SCOperaPageableViewController>
{
    NSMapTable *_subviewLayoutConfigs;
    SCOperaSharedResourceManager *_sharedResourceManager;
    NSObject<SCOperaLayer> *_layer;
    SCOperaConfiguration *_configuration;
    SCOperaEventListenerAnnouncer *_eventAnnouncer;
    id <SCOperaPropertyUpdateModerator> _propertyUpdateModerator;
    id <SCOperaPageableViewControllerDelegate> _pageableViewControllerDelegate;
}

+ (id)layerViewControllerWithConfiguration:(id)arg1 eventAnnouncer:(id)arg2 sharedResourceManager:(id)arg3;
- (void).cxx_destruct;
- (_Bool)canHandleRoundCorner;
- (void)cancelViewWillFullyAppearAtTime;
@property(readonly, nonatomic) SCOperaConfiguration *configuration; // @synthesize configuration=_configuration;
- (id)currentViewParameters;
- (void)dealloc;
- (void)didReceiveUpdateProperties:(id)arg1;
- (void)didUpdateBottomPageViewProperties:(id)arg1;
@property(readonly, nonatomic) SCOperaEventListenerAnnouncer *eventAnnouncer; // @synthesize eventAnnouncer=_eventAnnouncer;
- (id)gestureDescription;
- (id)imageProvider;
- (id)initWithConfiguration:(id)arg1 eventAnnouncer:(id)arg2 sharedResourceManager:(id)arg3;
- (_Bool)isPausedForAttachment;
- (_Bool)isRecyclable;
@property(retain, nonatomic) NSObject<SCOperaLayer> *layer; // @synthesize layer=_layer;
- (id)layoutConfigForSubview:(id)arg1;
- (void)layoutSubview:(id)arg1 diagonalLength:(double)arg2 verticalOffset:(double)arg3;
- (void)layoutSubview:(id)arg1 heightToWidthAspectRatio:(double)arg2 docking:(unsigned long long)arg3 verticalOffset:(double)arg4;
- (void)layoutSubview:(id)arg1 layoutConfig:(id)arg2 needsLayout:(_Bool)arg3;
- (void)layoutSubview:(id)arg1 size:(struct CGSize)arg2;
- (void)layoutSubview:(id)arg1 verticalAlignment:(unsigned long long)arg2 horizontalAlignment:(unsigned long long)arg3 verticalMargin:(double)arg4 horizontalMargin:(double)arg5;
- (void)layoutSubview:(id)arg1 verticalOffset:(double)arg2;
- (void)loadView;
- (_Bool)mediaIsBeingPreparedForDisplay;
- (void)neighborViewDidFullyAppearWithCurrentViewRelativePosition:(unsigned long long)arg1;
- (long long)pageabilityForRelativePosition:(unsigned long long)arg1 gestureRecognizer:(id)arg2;
@property(nonatomic) __weak id <SCOperaPageableViewControllerDelegate> pageableViewControllerDelegate; // @synthesize pageableViewControllerDelegate=_pageableViewControllerDelegate;
- (void)pause;
@property(nonatomic) __weak id <SCOperaPropertyUpdateModerator> propertyUpdateModerator; // @synthesize propertyUpdateModerator=_propertyUpdateModerator;
- (void)resume;
- (void)rotateBasedOnOrientation;
- (void)setPausedForAttachment:(_Bool)arg1;
- (void)setSubtitlesEnabled:(_Bool)arg1;
- (void)setVolume:(double)arg1;
@property(readonly, nonatomic) __weak SCOperaSharedResourceManager *sharedResourceManager; // @synthesize sharedResourceManager=_sharedResourceManager;
- (void)start;
- (void)stop;
- (void)teardown;
- (void)updateViewWithHorizontalPageOffset:(double)arg1 isCurrentPage:(_Bool)arg2;
- (void)updateViewWithPreviousLayer:(id)arg1 currentLayer:(id)arg2;
- (void)updateViewWithRelativeHorizontalContentOffset:(double)arg1;
- (id)videoAssetProvider;
- (void)viewDidFullyAppear;
- (void)viewDidFullyAppearWithBlockingLayerBelow;
- (void)viewDidFullyDisappear;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidPartiallyAppearWithCurrentViewRelativePosition:(unsigned long long)arg1;
- (void)viewWillFullyAppear;
- (void)viewWillFullyAppearAtTime:(CDStruct_1b6d18a9)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
