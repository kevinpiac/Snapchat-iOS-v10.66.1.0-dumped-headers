//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCSelectGroupMembersDelegate-Protocol.h"

@class NSString, SCSnapchatter;

@protocol SCRecipientBarDelegate <SCSelectGroupMembersDelegate>
- (SCSnapchatter *)getSuggestion:(NSString *)arg1;
- (void)textDidChange:(NSString *)arg1;

@optional
- (void)didChangeHeight:(double)arg1;
@end
