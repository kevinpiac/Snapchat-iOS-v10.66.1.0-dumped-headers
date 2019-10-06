//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SSTabBarButton, UIColor;

@interface SSTabBarItem : NSObject <NSCopying>
{
    _Bool _selected;
    _Bool _viewLoaded;
    NSString *_title;
    NSString *_imageName;
    UIColor *_tintColor;
    long long _badgeCount;
    SSTabBarButton *_view;
    CDUnknownBlockType _action;
}

+ (id)tabBarItemWithImageName:(id)arg1 title:(id)arg2 tintColor:(id)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(nonatomic) long long badgeCount; // @synthesize badgeCount=_badgeCount;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
- (id)initWithWithImageName:(id)arg1 title:(id)arg2 tintColor:(id)arg3;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic, getter=isViewLoaded) _Bool viewLoaded; // @synthesize viewLoaded=_viewLoaded;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) SSTabBarButton *view; // @synthesize view=_view;
- (void)viewTapped:(id)arg1;

@end

