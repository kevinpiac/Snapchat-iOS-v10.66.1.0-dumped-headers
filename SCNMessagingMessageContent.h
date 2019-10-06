//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData;

@interface SCNMessagingMessageContent : NSObject
{
    NSData *_content;
    long long _contentType;
    NSArray *_remoteMediaInfo;
    NSArray *_localMediaReferences;
}

+ (id)MessageContentWithContent:(id)arg1 contentType:(long long)arg2 remoteMediaInfo:(id)arg3 localMediaReferences:(id)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *content; // @synthesize content=_content;
@property(readonly, nonatomic) long long contentType; // @synthesize contentType=_contentType;
- (id)description;
- (id)initWithContent:(id)arg1 contentType:(long long)arg2 remoteMediaInfo:(id)arg3 localMediaReferences:(id)arg4;
@property(readonly, nonatomic) NSArray *localMediaReferences; // @synthesize localMediaReferences=_localMediaReferences;
@property(readonly, nonatomic) NSArray *remoteMediaInfo; // @synthesize remoteMediaInfo=_remoteMediaInfo;

@end

