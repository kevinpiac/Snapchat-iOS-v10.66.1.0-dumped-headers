//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCReplyWithLensChatStatusModelBuilder : NSObject
{
    NSString *_senderDisplayName;
    NSString *_snapAuthorUserName;
    NSString *_snapAuthorDisplayName;
}

+ (id)withReplyWithLensChatStatusModel:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setSenderDisplayName:(id)arg1;
- (id)setSnapAuthorDisplayName:(id)arg1;
- (id)setSnapAuthorUserName:(id)arg1;

@end

