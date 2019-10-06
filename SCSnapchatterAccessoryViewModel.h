//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCSnapchatterButtonAccessoryViewModel, SCSnapchatterButtonGroupAccessoryViewModel, SCSnapchatterFriendmojiAccessoryViewModel;

@interface SCSnapchatterAccessoryViewModel : NSObject <NSCopying>
{
    unsigned long long _subtype;
    SCSnapchatterButtonAccessoryViewModel *_button_buttonAccessoryViewModel;
    SCSnapchatterFriendmojiAccessoryViewModel *_friendmoji_friendmojiAccessoryViewModel;
    SCSnapchatterButtonGroupAccessoryViewModel *_buttonGroup_buttonGroupAccessoryViewModel;
}

+ (id)buttonGroupWithButtonGroupAccessoryViewModel:(id)arg1;
+ (id)buttonWithButtonAccessoryViewModel:(id)arg1;
+ (id)friendmojiWithFriendmojiAccessoryViewModel:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)internalInit;
- (_Bool)isEqual:(id)arg1;
- (void)matchButton:(CDUnknownBlockType)arg1 friendmoji:(CDUnknownBlockType)arg2 buttonGroup:(CDUnknownBlockType)arg3;

@end
