//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCMediaEndpointParameters : NSObject
{
    NSString *_storyId;
    NSString *_storyEncoding;
    NSString *_storyEncodingErrorReason;
    NSString *_chatId;
    NSString *_conversationId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *chatId; // @synthesize chatId=_chatId;
@property(copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
@property(copy, nonatomic) NSString *storyEncoding; // @synthesize storyEncoding=_storyEncoding;
@property(copy, nonatomic) NSString *storyEncodingErrorReason; // @synthesize storyEncodingErrorReason=_storyEncodingErrorReason;
@property(copy, nonatomic) NSString *storyId; // @synthesize storyId=_storyId;

@end

