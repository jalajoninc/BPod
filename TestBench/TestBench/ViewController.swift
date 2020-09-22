//
//  ViewController.swift
//  TestBench
//
//  Created by John Blaine on 9/20/20.
//  Copyright © 2020 John Blaine. All rights reserved.
//

import UIKit
import iLogin
import iHome
import iRating

class ViewController: UIViewController {

    var login : iLogin?
    var home : iHome?
    var rating : iRating?

    var sView : UIScrollView?
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        sView = UIScrollView(frame: CGRect.zero)
        self.view.addSubview(sView!)

        login = iLogin(frame: CGRect.zero)
        sView?.addSubview(login!)

        rating = iRating(frame: CGRect.zero)
        sView?.addSubview(rating!)
        
        home = iHome(frame: CGRect.zero)
        sView?.addSubview(home!)

        home?.testing()
        
        self.watchAction()
    }

    func watchAction() {
        login?.watchAction(1, login: { ( usr : String?, pwd : String?) -> Bool in
            return false
        }, reg: { (name : String?, phone : String?) -> Bool in
            return false
        }, forget: { (phone : String?) -> Bool in
            return false
        }, createPwd: { (pwd : String?) -> Bool in
            return false
        }, verify: { (code : String?) -> Bool in
            return false
        })
        
        rating?.watchAction(2.0, rating: { (v : CGFloat) -> Bool in
            print("val : ", v)
            return false
        })
        
    }
    
    override func viewWillLayoutSubviews() {
        let w = self.view.frame.size.width;
        let h = self.view.frame.size.height;
        sView?.frame = CGRect(x: w * 0.0, y: h * 0.0, width: w * 1.0, height: h * 1.0)
        sView?.contentSize = CGSize(width: w * 1.0, height: h * 4.0)
        
        home?.frame = CGRect(x: w * 0.0, y: h * 0.0, width: w * 1.0, height: h * 1.0)

        login?.frame = CGRect(x: w * 0.1, y: h * 1.5, width: w * 0.8, height: h * 0.4)
        
        rating?.frame = CGRect(x: w * 0.2, y: h * 1.1, width: w * 0.6, height: h * 0.05)
        
    }

}

