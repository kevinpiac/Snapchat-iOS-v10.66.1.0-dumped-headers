//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCSentinel;
@protocol SCStoryUploadProgressViewDataSource;

@interface SCStoryUploadProgressView : UIView
{
    struct CGSize _previousBoundsSize;
    SCSentinel *_sentinel;
    id <SCStoryUploadProgressViewDataSource> _dataSource;
}

+ (Class)layerClass;
- (void).cxx_destruct;
- (id)_activeColor;
- (void)_finish;
- (id)_inactiveColor;
- (_Bool)_isAnimating;
- (void)_start;
@property(nonatomic) __weak id <SCStoryUploadProgressViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)performAnimation:(unsigned long long)arg1;
- (void)reset;
- (id)shapeLayer;
- (void)updateProgress:(double)arg1 animated:(_Bool)arg2;

@end

