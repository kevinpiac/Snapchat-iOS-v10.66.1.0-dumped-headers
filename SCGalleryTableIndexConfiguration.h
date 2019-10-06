//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTableIndexConfiguration-Protocol.h"

@class NSString, UIColor;

@interface SCGalleryTableIndexConfiguration : NSObject <SCTableIndexConfiguration>
{
}

@property(readonly, nonatomic) UIColor *scrollBarBackgroundColor;
@property(readonly, nonatomic) UIColor *scrollBarColor;
@property(readonly, nonatomic) double scrollBarFastScrollingMinimumWidth;
@property(readonly, nonatomic) UIColor *scrollBarLabelTextColor;
@property(readonly, nonatomic) double scrollBarPressedWidth;
@property(readonly, nonatomic) _Bool supportsRTL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UIColor *transitionScrollBarColor;

@end

