//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString, SOJUSignedPayload;

@interface SOJUHeaderBuilder : NSObject
{
    NSString *_from;
    NSArray *_to;
    NSString *_convId;
    NSNumber *_isv3;
    SOJUSignedPayload *_auth;
    NSNumber *_connSeqNum;
}

+ (id)withJUHeader:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setAuth:(id)arg1;
- (id)setConnSeqNum:(id)arg1;
- (id)setConnSeqNumValue:(long long)arg1;
- (id)setConvId:(id)arg1;
- (id)setFrom:(id)arg1;
- (id)setIsv3:(id)arg1;
- (id)setIsv3Value:(_Bool)arg1;
- (id)setTo:(id)arg1;

@end

