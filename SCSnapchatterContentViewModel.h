//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSAttributedString, SCActionModel, SCSnapchatterAccessoryViewModel, SCSnapchatterAvatarContainerViewModel;

@interface SCSnapchatterContentViewModel : NSObject <NSCopying>
{
    NSAttributedString *_displayTitleAttributedText;
    NSAttributedString *_subtitleAttributedText;
    SCSnapchatterAvatarContainerViewModel *_avatarViewModel;
    SCSnapchatterAccessoryViewModel *_accessoryViewModel;
    SCActionModel *_tapAction;
    double _snapchatterCardHeight;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCSnapchatterAccessoryViewModel *accessoryViewModel; // @synthesize accessoryViewModel=_accessoryViewModel;
@property(readonly, copy, nonatomic) SCSnapchatterAvatarContainerViewModel *avatarViewModel; // @synthesize avatarViewModel=_avatarViewModel;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSAttributedString *displayTitleAttributedText; // @synthesize displayTitleAttributedText=_displayTitleAttributedText;
- (unsigned long long)hash;
- (id)initWithDisplayTitleAttributedText:(id)arg1 subtitleAttributedText:(id)arg2 avatarViewModel:(id)arg3 accessoryViewModel:(id)arg4 tapAction:(id)arg5 snapchatterCardHeight:(double)arg6;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) double snapchatterCardHeight; // @synthesize snapchatterCardHeight=_snapchatterCardHeight;
@property(readonly, copy, nonatomic) NSAttributedString *subtitleAttributedText; // @synthesize subtitleAttributedText=_subtitleAttributedText;
@property(readonly, copy, nonatomic) SCActionModel *tapAction; // @synthesize tapAction=_tapAction;

@end

