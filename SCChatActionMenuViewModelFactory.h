//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SCChatActionMenuButtonViewModelGenerating;

@interface SCChatActionMenuViewModelFactory : NSObject
{
    id <SCChatActionMenuButtonViewModelGenerating> _buttonViewModelGenerator;
    struct NSDictionary *_parcelMap;
    NSString *_username;
    NSString *_userId;
}

- (void).cxx_destruct;
- (id)initWithButtonViewModelGenerator:(id)arg1 parcelMap:(struct NSDictionary *)arg2 username:(id)arg3 userId:(id)arg4;
- (id)viewModelForPrimaryMessage:(id)arg1 allMessages:(id)arg2 selectedIndex:(unsigned long long)arg3 conversationId:(id)arg4 group:(id)arg5 sender:(id)arg6 boundingWidth:(double)arg7 isFailedAtLeastOnce:(_Bool)arg8 isArroyoConversation:(_Bool)arg9;

@end

