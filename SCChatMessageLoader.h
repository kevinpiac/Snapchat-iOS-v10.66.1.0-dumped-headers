//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SCChatMessageLoaderDelegate;

@interface SCChatMessageLoader : NSObject
{
    id <SCChatMessageLoaderDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SCChatMessageLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)loadMessageContent:(id)arg1 messageMetadata:(id)arg2 requestContext:(long long)arg3;

@end

