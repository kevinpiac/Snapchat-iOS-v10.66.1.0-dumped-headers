//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;

@interface SCPromptContentItem : NSObject
{
    UIView *_contentView;
    struct UIEdgeInsets _edgeInsets;
}

+ (id)contentItemWithContentView:(id)arg1 edgeInsets:(struct UIEdgeInsets)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
- (id)initWithContentView:(id)arg1 edgeInsets:(struct UIEdgeInsets)arg2;

@end

