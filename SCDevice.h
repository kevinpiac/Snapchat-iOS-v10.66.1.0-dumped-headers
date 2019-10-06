//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCDevice : NSObject
{
    NSString *_deviceModel;
    NSString *_hardwareModel;
    NSString *_systemName;
    NSString *_systemVersion;
}

+ (id)currentDevice;
- (void).cxx_destruct;
- (id)chipName;
- (long long)chipType;
@property(readonly, copy, nonatomic) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
@property(readonly, nonatomic) long long deviceModelType;
@property(readonly, copy, nonatomic) NSString *hardwareModel; // @synthesize hardwareModel=_hardwareModel;
- (id)initWithDeviceModel:(id)arg1 hardwareModel:(id)arg2 systemName:(id)arg3 systemVersion:(id)arg4;
- (id)initWithUIDevice:(id)arg1;
@property(readonly, nonatomic) _Bool isIpad;
@property(readonly, nonatomic) _Bool isIphone;
@property(readonly, nonatomic) _Bool isIpod;
- (_Bool)isSimilarToIphone5SorNewer;
- (_Bool)isSimilarToIphone5orNewer;
- (_Bool)isSimilarToIphone6SorNewer;
- (_Bool)isSimilarToIphone6orNewer;
- (_Bool)isSimilarToIphone7orNewer;
- (_Bool)isSimilarToIphone8orNewer;
- (_Bool)isSimilarToIphoneXSorNewer;
- (_Bool)isSimilarToIphoneXorNewer;
@property(readonly, copy, nonatomic) NSString *systemName; // @synthesize systemName=_systemName;
@property(readonly, nonatomic) long long systemNameType;
@property(readonly, copy, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;

@end

