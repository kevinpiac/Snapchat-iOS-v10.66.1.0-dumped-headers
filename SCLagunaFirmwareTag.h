//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SCSpectaclesFirmwareVersion;

@interface SCLagunaFirmwareTag : NSObject
{
    _Bool _isRequired;
    NSString *_name;
    NSString *_tagDescription;
    NSString *_lastEditDatetime;
    NSString *_lastEditUser;
    id <SCSpectaclesFirmwareVersion> _latestVersion;
    id <SCSpectaclesFirmwareVersion> _minimumAcceptedVersion;
    unsigned long long _hardwareMajorNumber;
    long long _category;
}

+ (id)_firmwareTagCategoriesEnumToString;
+ (id)_stringFirmwareTagCategoriesToEnum;
+ (long long)firmwareTagCategoryForString:(id)arg1;
+ (id)stringForFirmwareTagCategory:(long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long category; // @synthesize category=_category;
- (id)description;
@property(nonatomic) unsigned long long hardwareMajorNumber; // @synthesize hardwareMajorNumber=_hardwareMajorNumber;
- (id)initWithDictionary:(id)arg1;
@property(nonatomic) _Bool isRequired; // @synthesize isRequired=_isRequired;
@property(copy, nonatomic) NSString *lastEditDatetime; // @synthesize lastEditDatetime=_lastEditDatetime;
@property(copy, nonatomic) NSString *lastEditUser; // @synthesize lastEditUser=_lastEditUser;
@property(retain, nonatomic) id <SCSpectaclesFirmwareVersion> latestVersion; // @synthesize latestVersion=_latestVersion;
@property(retain, nonatomic) id <SCSpectaclesFirmwareVersion> minimumAcceptedVersion; // @synthesize minimumAcceptedVersion=_minimumAcceptedVersion;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *tagDescription; // @synthesize tagDescription=_tagDescription;

@end

