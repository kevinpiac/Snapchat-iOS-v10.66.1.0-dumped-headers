//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCHeaderPromptViewModel : NSObject <NSCopying>
{
    int _protoPromptType;
    NSString *_emoji;
    NSString *_title;
    NSString *_body;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *body; // @synthesize body=_body;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *emoji; // @synthesize emoji=_emoji;
- (unsigned long long)hash;
- (id)initWithEmoji:(id)arg1 title:(id)arg2 body:(id)arg3 protoPromptType:(int)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) int protoPromptType; // @synthesize protoPromptType=_protoPromptType;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;

@end

