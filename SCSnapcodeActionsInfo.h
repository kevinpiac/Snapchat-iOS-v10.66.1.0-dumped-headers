//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface SCSnapcodeActionsInfo : NSObject
{
    int _snapcodeType;
    int _version;
    NSDictionary *_scanActionResponse;
    NSArray *_scannableAction;
    NSString *_scanDecodedData;
    NSString *_scannableId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *scanActionResponse; // @synthesize scanActionResponse=_scanActionResponse;
@property(retain, nonatomic) NSString *scanDecodedData; // @synthesize scanDecodedData=_scanDecodedData;
@property(retain, nonatomic) NSArray *scannableAction; // @synthesize scannableAction=_scannableAction;
@property(retain, nonatomic) NSString *scannableId; // @synthesize scannableId=_scannableId;
@property(nonatomic) int snapcodeType; // @synthesize snapcodeType=_snapcodeType;
@property(nonatomic) int version; // @synthesize version=_version;

@end
