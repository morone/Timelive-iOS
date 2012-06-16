//
//  ViewController.h
//  RealTimeLife
//
//  Created by Ádamo Morone on 14/06/12.
//  Copyright (c) 2012 3ver. All rights reserved.
//


#import <UIKit/UIKit.h>
//Importa o MapKit.h
#import <MapKit/MapKit.h>

@class DetailController;


//Define uma constante gringa para metros por milha.
#define METERS_PER_MILE 1609.344

@interface ViewController : UIViewController {
    
    DetailController* detailController;
    

}

@property (weak, nonatomic) IBOutlet MKMapView *mapView;
@property (nonatomic, retain) DetailController *detailController;


@end