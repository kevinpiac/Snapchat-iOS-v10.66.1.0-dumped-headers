//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UITapGestureRecognizer;
@protocol SCSCPreviewGestureHandlerDelegate;

@interface SCPreviewGestureHandler : NSObject
{
    id <SCSCPreviewGestureHandlerDelegate> _delegate;
    UITapGestureRecognizer *_tapGestureRecognizer;
    unsigned long long _disabledOptions;
}

- (void).cxx_destruct;
- (void)_handleTapGesture:(id)arg1;
@property(readonly, nonatomic) __weak id <SCSCPreviewGestureHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long disabledOptions; // @synthesize disabledOptions=_disabledOptions;
- (id)initWithPreviewView:(id)arg1 configuration:(id)arg2 delegate:(id)arg3;
@property(readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
- (void)toggleGestureOptions:(unsigned long long)arg1 enabled:(_Bool)arg2;

@end

