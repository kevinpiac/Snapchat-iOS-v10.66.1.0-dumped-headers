//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "SCActionHandlingDelegate-Protocol.h"
#import "SCActionable-Protocol.h"
#import "SCRoundedCornerConfigurable-Protocol.h"
#import "SCViewModelConfigurable-Protocol.h"

@class NSString, SCLazy, SCSnapchatterVerticalView, UILongPressGestureRecognizer;
@protocol SCActionHandling;

@interface SCSnapchatterCarouselCollectionViewCell : UICollectionViewCell <SCActionHandlingDelegate, SCViewModelConfigurable, SCActionable, SCRoundedCornerConfigurable>
{
    SCLazy *_backgroundShapeView;
    SCSnapchatterVerticalView *_snapchatterView;
    struct CGRect _shapeLayerPathRect;
    UILongPressGestureRecognizer *_longPressGesture;
    id _viewModel;
    id <SCActionHandling> _actionHandler;
    unsigned long long _roundedCorners;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (void).cxx_destruct;
- (void)_didLongPress:(id)arg1;
- (void)_setShapeLayerPathRect:(struct CGRect)arg1;
- (void)_updateBackgroundShapViewPath;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (void)applyLayoutAttributes:(id)arg1;
- (_Bool)handleActionWithActionModel:(id)arg1 fromSourceView:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(nonatomic) unsigned long long roundedCorners; // @synthesize roundedCorners=_roundedCorners;
- (void)setImageDownloader:(id)arg1;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

