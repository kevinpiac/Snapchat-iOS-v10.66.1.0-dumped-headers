//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCInfoStickerView.h"

#import "SCPreviewStickerViewCycleable-Protocol.h"

@class NSArray, NSString, SCWeather, SCWeatherDailyView, SCWeatherFilterInformationView, SCWeatherHourlyView, SCWeatherViewMetrics, UILabel, UIView;
@protocol SCStickerPreferenceAdaptor, SCWeatherStickerViewDelegate;

@interface SCWeatherStickerView : SCInfoStickerView <SCPreviewStickerViewCycleable>
{
    SCWeather *_weather;
    UILabel *_degreeLabel;
    long long _orientation;
    long long _roundedTempDegCelsius;
    long long _roundedTempDegFahrenheit;
    UILabel *_temperatureLabel;
    UILabel *_temperatureScaleLabel;
    SCWeatherHourlyView *_hourlyWeatherView;
    SCWeatherDailyView *_dailyWeatherView;
    SCWeatherFilterInformationView *_informationView;
    SCWeatherViewMetrics *_weatherViewMetrics;
    _Bool _shouldDisplayForecast;
    _Bool _shouldDisplayInformationView;
    NSArray *_hourlyForecasts;
    NSArray *_dailyForecasts;
    NSString *_locationName;
    _Bool _assetsDownloaded;
    UIView *_temperatureView;
    id <SCStickerPreferenceAdaptor> _stickerPreferenceAdaptor;
    long long _weatherViewType;
    id <SCWeatherStickerViewDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_onTapInformationView:(unsigned long long)arg1;
- (void)_regenerateViews;
- (id)_stringForTemperature:(unsigned long long)arg1;
- (id)_stringForTemperatureScale:(unsigned long long)arg1;
- (void)_switchTemperatureScale:(unsigned long long)arg1;
- (void)_updateDailyForecastView:(unsigned long long)arg1 isInPreviewSticker:(_Bool)arg2;
- (void)_updateHourlyForecastView:(unsigned long long)arg1 isInPreviewSticker:(_Bool)arg2;
- (void)_updateInformationView:(unsigned long long)arg1;
- (void)_updateSCWeatherStyle;
- (void)_updateWeatherFilterView:(unsigned long long)arg1;
- (void)_validateForecastData:(id)arg1;
- (void)cycleStickerToNextStyle;
@property(nonatomic) __weak id <SCWeatherStickerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1 weather:(id)arg2 target:(long long)arg3 stickerPreferenceAdaptor:(id)arg4;
- (void)setTemperatureToDisplay;
- (_Bool)shouldRespondToTap:(id)arg1;
@property(readonly, nonatomic) long long weatherViewType; // @synthesize weatherViewType=_weatherViewType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

