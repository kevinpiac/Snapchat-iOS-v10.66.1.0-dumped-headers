//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSAttributedString, SCSearchActionButtonViewModel;

@interface SCAddFriendsSectionHeaderPrimaryViewModel : NSObject <NSCopying>
{
    unsigned long long _subtype;
    SCSearchActionButtonViewModel *_button_actionButtonViewModel;
    NSAttributedString *_title_titleAttributedText;
}

+ (id)buttonWithActionButtonViewModel:(id)arg1;
+ (id)titleWithTitleAttributedText:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)internalInit;
- (_Bool)isEqual:(id)arg1;
- (void)matchButton:(CDUnknownBlockType)arg1 title:(CDUnknownBlockType)arg2;

@end

