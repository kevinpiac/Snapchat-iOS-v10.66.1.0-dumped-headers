//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatUIContentGenerating-Protocol.h"

@class NSString;

@interface SCChatTextContentViewModelGenerator : NSObject <SCChatUIContentGenerating>
{
}

+ (id)_contentForRawText:(id)arg1 textAttributes:(id)arg2 mediaAttributes:(id)arg3 addressMediaCardContents:(id)arg4 urlMediaCardContents:(id)arg5 status:(long long)arg6 payloadContentWidth:(double)arg7;
+ (id)contentFromParameterProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

