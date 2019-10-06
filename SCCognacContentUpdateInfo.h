//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface SCCognacContentUpdateInfo : NSObject <NSCopying, NSCoding>
{
    _Bool _newApp;
    _Bool _hasMajorUpdate;
    int _majorUpdateVersion;
    int _minorUpdateVersion;
    NSString *_majorUpdateDescription;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) _Bool hasMajorUpdate; // @synthesize hasMajorUpdate=_hasMajorUpdate;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithNewApp:(_Bool)arg1 hasMajorUpdate:(_Bool)arg2 majorUpdateVersion:(int)arg3 minorUpdateVersion:(int)arg4 majorUpdateDescription:(id)arg5;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *majorUpdateDescription; // @synthesize majorUpdateDescription=_majorUpdateDescription;
@property(readonly, nonatomic) int majorUpdateVersion; // @synthesize majorUpdateVersion=_majorUpdateVersion;
@property(readonly, nonatomic) int minorUpdateVersion; // @synthesize minorUpdateVersion=_minorUpdateVersion;
@property(readonly, nonatomic) _Bool newApp; // @synthesize newApp=_newApp;

@end
