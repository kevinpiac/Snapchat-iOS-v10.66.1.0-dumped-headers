//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface SCMapOnDemandAsset : NSObject
{
    NSString *_scope;
    NSString *_identifier;
    NSURL *_remoteURL;
}

- (void).cxx_destruct;
- (id)_reuseKey;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithScope:(id)arg1 identifier:(id)arg2 remoteURL:(id)arg3;
- (_Bool)isCurrentlyCached;
- (id)localPath;
@property(readonly, nonatomic) NSURL *remoteURL; // @synthesize remoteURL=_remoteURL;
@property(readonly, nonatomic) NSString *scope; // @synthesize scope=_scope;

@end
