//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface SCCognacWebProxyLoadRequest : NSObject
{
    _Bool _returnsResponseAndData;
    _Bool _prefersResumableDownload;
    NSURL *_url;
}

- (void).cxx_destruct;
- (id)initWithURL:(id)arg1 returnsResponseAndData:(_Bool)arg2 prefersResumableDownload:(_Bool)arg3;
@property(readonly, nonatomic) _Bool prefersResumableDownload; // @synthesize prefersResumableDownload=_prefersResumableDownload;
@property(readonly, nonatomic) _Bool returnsResponseAndData; // @synthesize returnsResponseAndData=_returnsResponseAndData;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;

@end

